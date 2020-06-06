/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFocusSystem.h>

@protocol UIFocusEnvironment;
@interface _UIHostedFocusSystem : UIFocusSystem {

	BOOL _didSetFocusSoundGenerator;
	id<UIFocusEnvironment> _hostEnvironment;

}

@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> hostEnvironment;                                                     //@synthesize hostEnvironment=_hostEnvironment - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<_UIHostedFocusSystemDelegate> delegate; 
-(id)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)_isEligibleForFocusInteraction;
-(id)_initWithHostEnvironment:(id)arg1 ;
-(BOOL)containsChildOfHostEnvironment:(id)arg1 ;
-(id)_hostFocusSystem;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(id)_focusSoundGenerator;
-(BOOL)_postsFocusUpdateNotifications;
-(void)_setFocusSoundGenerator:(id)arg1 ;
-(id<UIFocusEnvironment>)hostEnvironment;
@end

