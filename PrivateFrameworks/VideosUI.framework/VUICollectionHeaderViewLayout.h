/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUICollectionHeaderViewLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;
	TVImageLayout* _imageViewLayout;

}

@property (nonatomic,retain) TVImageLayout * imageViewLayout;                   //@synthesize imageViewLayout=_imageViewLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                 //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subtitleTextLayout;              //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(id)maxImageContentSizeCategory;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)subtitleTextLayout;
-(TVImageLayout *)imageViewLayout;
-(void)setImageViewLayout:(TVImageLayout *)arg1 ;
@end

