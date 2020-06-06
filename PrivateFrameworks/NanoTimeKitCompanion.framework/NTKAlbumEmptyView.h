/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CLKDevice, UIImageView, UILabel, NSString;

@interface NTKAlbumEmptyView : UIView {

	CLKDevice* _device;
	UIImageView* _iconImageView;
	UILabel* _headerLabel;
	NSString* _headerLabelText;
	UILabel* _bodyLabel;
	NSString* _bodyLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
@property (nonatomic,retain) NSString * bodyLabelText;                //@synthesize bodyLabelText=_bodyLabelText - In the implementation block
-(void)layoutSubviews;
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
-(id)initForDevice:(id)arg1 ;
-(void)setBodyLabelText:(NSString *)arg1 ;
-(NSString *)bodyLabelText;
@end

