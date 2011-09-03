
#import <UIKit/UIKit.h>
#import "TDTDCamera.h"
#import "TDTDGLView.h"

typedef enum { PASSTHROUGH_VIDEO, SIMPLE_THRESHOLDING, POSITION_THRESHOLDING, OBJECT_TRACKING} TDTDDisplayMode;


@interface TDTDViewController : UIViewController <TDTDCameraDelegate>
{
	TDTDCamera *camera;
	UIScreen *screenForDisplay;
	TDTDGLView *glView;
	CALayer *trackingDot;
	
	TDTDDisplayMode displayMode;
	
	BOOL shouldReplaceThresholdColor;
	CGPoint currentTouchPoint;
	GLfloat thresholdSensitivity;
	GLfloat thresholdColor[3];
	
	GLuint directDisplayProgram, thresholdProgram, positionProgram;
	GLuint videoFrameTexture;
	
	GLubyte *rawPositionPixels;
}

@property(readonly) TDTDGLView *glView;

// Initialization and teardown
- (id)initWithScreen:(UIScreen *)newScreenForDisplay;

// OpenGL ES 2.0 setup methods
- (BOOL)loadVertexShader:(NSString *)vertexShaderName fragmentShader:(NSString *)fragmentShaderName forProgram:(GLuint *)programPointer;
- (BOOL)compileShader:(GLuint *)shader type:(GLenum)type file:(NSString *)file;
- (BOOL)linkProgram:(GLuint)prog;
- (BOOL)validateProgram:(GLuint)prog;

// Display mode switching
- (void)handleSwitchOfDisplayMode:(id)sender;

// Image processing
- (CGPoint)centroidFromTexture:(GLubyte *)pixels;

@end

