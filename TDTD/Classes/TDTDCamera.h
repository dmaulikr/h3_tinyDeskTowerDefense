
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>

@protocol TDTDCameraDelegate;

@interface TDTDCamera : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
	AVCaptureVideoPreviewLayer *videoPreviewLayer;
	AVCaptureSession *captureSession;
	AVCaptureDeviceInput *videoInput;
	AVCaptureVideoDataOutput *videoOutput;
}

@property(nonatomic, assign) id<TDTDCameraDelegate> delegate;
@property(readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;

@end

@protocol TDTDCameraDelegate
- (void)cameraHasConnected;
- (void)processNewCameraFrame:(CVImageBufferRef)cameraFrame;
@end
