/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, CAKeyframeAnimation;



@interface PLCameraFocusView : UIView 
{
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
}


- (id)init:(BOOL)arg1;
- (void)dealloc;
- (id)_createContentsAnimation;
- (id)_createBoundsAnimation;
- (void)startAnimating;
- (void)stopAnimating;
- (void)_fadeOut;
- (void)_fadeOutDidFinish;
- (void)focusDidEnd;

@end