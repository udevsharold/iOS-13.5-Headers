/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewAnimationController.h>

@class NSString;

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {

	int _slide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(void)performAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(id)initWithSlide:(int)arg1 ;
-(id)placementForSlideStart:(BOOL)arg1 ;
@end

