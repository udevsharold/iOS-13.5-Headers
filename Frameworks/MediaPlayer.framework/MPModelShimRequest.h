/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest {

	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) MPModelRequest * modelRequest;              //@synthesize modelRequest=_modelRequest - In the implementation block
+(Class)responseClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)middlewareClasses;
-(MPModelRequest *)modelRequest;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
@end

