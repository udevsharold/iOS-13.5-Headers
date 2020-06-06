/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <libobjc.A.dylib/_MKPlaceViewControllerDelegate.h>

@class SearchUIMapsViewController, NSString;

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, _MKPlaceViewControllerDelegate> {

	BOOL _alreadyDispatchedOnMainQueue;
	SearchUIMapsViewController* _mapViewController;
	CGSize _placecardBoundsSize;

}

@property (retain) SearchUIMapsViewController * mapViewController;              //@synthesize mapViewController=_mapViewController - In the implementation block
@property (assign) BOOL alreadyDispatchedOnMainQueue;                           //@synthesize alreadyDispatchedOnMainQueue=_alreadyDispatchedOnMainQueue - In the implementation block
@property (assign,nonatomic) CGSize placecardBoundsSize;                        //@synthesize placecardBoundsSize=_placecardBoundsSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)placeViewControllerDidUpdateHeight:(id)arg1 ;
-(void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(SearchUIMapsViewController *)mapViewController;
-(void)setMapViewController:(SearchUIMapsViewController *)arg1 ;
-(id)embeddedViewController;
-(id)setupContentView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)alreadyDispatchedOnMainQueue;
-(void)setAlreadyDispatchedOnMainQueue:(BOOL)arg1 ;
-(CGSize)placecardBoundsSize;
-(void)setPlacecardBoundsSize:(CGSize)arg1 ;
@end

