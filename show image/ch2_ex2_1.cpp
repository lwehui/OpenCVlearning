/* License:
   Oct. 3, 2008
   Right to use this code in any way you want without warrenty, support or any guarentee of it working.

   BOOK: It would be nice if you cited it:
   Learning OpenCV: Computer Vision with the OpenCV Library
     by Gary Bradski and Adrian Kaehler
     Published by O'Reilly Media, October 3, 2008*/
 
  
#include "highgui.h"

int main( int argc, char** argv )
{
  IplImage* img = cvLoadImage( argv[1] );
  cvNamedWindow("Example1", CV_WINDOW_AUTOSIZE );
  cvShowImage("Example1", img );
  cvWaitKey(0);
  cvReleaseImage( &img );
  cvDestroyWindow("Example1");
}
