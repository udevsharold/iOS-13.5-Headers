/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse {

	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)responseWithURL:(id)arg1 thumbnail:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(UIImage *)thumbnail;
-(id)initWithURL:(id)arg1 thumbnail:(id)arg2 ;
@end

