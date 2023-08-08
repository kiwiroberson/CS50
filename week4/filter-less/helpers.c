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

    RGBTRIPLE temppixel;
    int w;

    if ( width%2 == 0)
    {
        w = width / 2;
    }
    else
    {
        w = (width + 1) / 2;
    }
     for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < w; j++)
        {
            temppixel = image[i][j];
            image[i][j] = image[i][width - j];
            image[i][width - j] = temppixel;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tempimage;
    int c = 0;
    for(int i = 1; i < height; i++)
    {
        for(int j = 1; j < width; j++)
        {
            for(int k = -1; k < 2; k++)
            {
                for(int l = -1; l < 2; l++)
                {
                tempimage.rgbtBlue = tempimage.rgbtBlue + image[i + k][j + l].rgbtBlue;
                tempimage.rgbtRed = tempimage.rgbtRed + image[i + k][j + l].rgbtRed;
                tempimage.rgbtGreen = tempimage.rgbtGreen + image[i + k][j + l].rgbtGreen;
                c++;
                }
            }

        image[i][j].rgbtBlue = tempimage.rgbtBlue / c;
        image[i][j].rgbtRed = tempimage.rgbtRed / c;
        image[i][j].rgbtGreen = tempimage.rgbtGreen / c;
        c = 0;
        }

    }



    return;
}
