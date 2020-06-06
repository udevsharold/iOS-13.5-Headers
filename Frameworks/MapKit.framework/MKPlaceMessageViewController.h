/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate, _MKPlaceItem;
@class NSString;

@interface MKPlaceMessageViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	id<_MKPlaceItem> _placeItem;

}

@property (nonatomic,retain) id<_MKPlaceItem> placeItem;                                             //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(id)initWithPlaceItem:(id)arg1 ;
-(void)loadRow;
@end

