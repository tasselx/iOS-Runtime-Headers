/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPIncomingCallOptionsView, UIView;

@interface TPIncomingCallOptionsScrollView : UIScrollView <UIScrollViewDelegate> {
    BOOL _isDecelerating;
    UIView *_offIntoInfinityView;
    TPIncomingCallOptionsView *_optionsView;
}

@property(retain) TPIncomingCallOptionsView * optionsView;

- (void)dealloc;
- (void)disableAndScrollToDefaultOffsetSuppressBarChanges:(BOOL)arg1 completion:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)optionsView;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setOptionsView:(id)arg1;
- (void)setupAndAddToView:(id)arg1;

@end
