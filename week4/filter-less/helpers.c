#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int average = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3;
            image[i][j].rgbtBlue = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtRed = average;

        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {

            int originalBlue = image[i][j].rgbtBlue;
            int originalGreen = image[i][j].rgbtGreen;
            int originalRed = image[i][j].rgbtRed;

            int newBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue;
            int newGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue;
            int newRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue;

              if (newBlue > 255)
            {
                 newBlue = 255;
            }

            if (newGreen > 255)
            {
                 newGreen = 255;
            }

            if ( newRed > 255)
            {
                 newRed= 255;
            }

            image[i][j].rgbtBlue = newBlue;
            image[i][j].rgbtGreen = newGreen;
            image[i][j].rgbtRed = newRed;



        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int w;
    RGBTRIPLE tempimage;
    if (width % 2 == 0)
    {
        w = width / 2;
    }
    else
    {
        w = (width + 1 / 2);
    }

     for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < w; j++)
        {
            tempimage = image[i][j];
            image[i][j] = image[i][width - j];
            image[i][j] = tempimage;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
