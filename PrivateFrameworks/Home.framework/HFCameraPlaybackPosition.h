/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSDate, NSString;

@interface HFCameraPlaybackPosition : NSObject <NAIdentifiable> {

	unsigned long long _contentType;
	NSDate* _clipPlaybackDate;

}

@property (nonatomic,readonly) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * clipPlaybackDate;              //@synthesize clipPlaybackDate=_clipPlaybackDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)livePosition;
+(id)clipPositionWithDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)contentType;
-(NSDate *)clipPlaybackDate;
-(id)initWithContentType:(unsigned long long)arg1 clipPlaybackDate:(id)arg2 ;
@end

