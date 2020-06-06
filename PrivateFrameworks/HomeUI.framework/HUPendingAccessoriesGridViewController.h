/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class NSString;

@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUser:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
@end

