/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {

	NSString* _destinationName;
	UILabel* _destinationSubtitleLabel;
	UILabel* _destinationTitleLabel;
	long long _style;
	UIImageView* _videosImageView;

}

@property (nonatomic,copy) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

