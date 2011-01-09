/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, NSArray, NSMutableArray, UIView, UIImageView;



@interface UIButtonBarCustomizeView : UIView 
{
    UIToolbar *_buttonBar;
    NSArray *_availableButtons;
    NSArray *_currentButtons;
    NSMutableArray *_fixedButtons;
    UIView *_draggingView;
    UIImageView *_ghostView;
    UIImageView *_replacementGlow;
    UIView *_replaceButton;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
}


- (void)dealloc;
- (void)setButtonBar:(id)arg1 currentButtons:(id)arg2 availableButtons:(id)arg3;
- (void)layoutSubviews;
- (void)adjustDragImage:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (id)buttonAtEvent:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)canHandleSwipes;
- (void)buttonBarMouseDown:(struct __GSEvent { }*)arg1;
- (void)buttonBarMouseDragged:(struct __GSEvent { }*)arg1;
- (void)buttonBarMouseUp:(struct __GSEvent { }*)arg1;
- (void)_finishCustomizeMouseUpChangeAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;

@end