/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKLoginAlertView : UIAlertView {
    unsigned int _passwordFieldIndex;
    NSString *_username;
}

@property(copy) NSString * password;
@property(copy) NSString * username;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)username;

@end