/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

@interface PGHostedWindow : _UIHostedWindow

@property (nonatomic,readonly) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_canBecomeKeyWindow;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
@end

