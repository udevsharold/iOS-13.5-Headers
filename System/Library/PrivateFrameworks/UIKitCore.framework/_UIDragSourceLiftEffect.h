/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDragInteractionEffect.h>

@class NSMapTable, NSString;

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {

	NSMapTable* _liftOperationByContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2 ;
-(void)_setInteractionEffectsLifted:(BOOL)arg1 withOperation:(id)arg2 ;
-(void)_installInteractionPlattersForOperation:(id)arg1 ;
-(void)_uninstallInteractionPlattersForOperation:(id)arg1 ;
@end

