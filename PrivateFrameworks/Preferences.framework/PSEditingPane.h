/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;



@interface PSEditingPane : UIView 
{
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard : 1;
}

+ (struct CGSize { float x1; float x2; })defaultSize;
+ (id)defaultBackgroundColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)preferenceSpecifier;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;
- (BOOL)requiresKeyboard;
- (void)drawPinstripesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)specifierLabel;
- (void)drawLabelInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)wantsNewButton;
- (void)viewDidBecomeVisible;
- (void)addNewValue;
- (void)editMode;
- (void)doneEditing;
- (BOOL)handlesDoneButton;
- (BOOL)changed;

@end