/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (assign,nonatomic) BOOL dontDismissReachability; 
@required
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)updateForKeyplaneChangeWithContext:(id)arg1;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;
-(BOOL)isOnScreenRotating;
-(BOOL)dontDismissReachability;
-(void)setDontDismissReachability:(BOOL)arg1;

@end

