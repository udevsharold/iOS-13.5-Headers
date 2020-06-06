/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:03 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSButton.h>

@class CPMapButton;

@interface CPSMapButton : CPSButton {

	CPMapButton* _mapButton;

}

@property (nonatomic,retain) CPMapButton * mapButton;              //@synthesize mapButton=_mapButton - In the implementation block
+(id)buttonWithCPMapButton:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCharge:(float)arg1 ;
-(float)charge;
-(void)setMapButton:(CPMapButton *)arg1 ;
-(void)_updateButtonImages;
-(CPMapButton *)mapButton;
@end

