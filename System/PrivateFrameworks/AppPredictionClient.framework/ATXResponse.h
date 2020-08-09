/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID, NSError, NSArray;

@interface ATXResponse : NSObject <NSSecureCoding> {

	NSData* _cacheFileData;
	NSUUID* _uuid;
	NSError* _error;
	NSArray* _predictions;

}

@property (nonatomic,readonly) NSUUID * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * predictedApps; 
@property (nonatomic,readonly) NSArray * predictions;                //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSData * cacheFileData;               //@synthesize cacheFileData=_cacheFileData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSUUID *)uuid;
-(id)jsonDescription;
-(NSArray *)predictions;
-(id)json;
-(NSData *)cacheFileData;
-(id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3 ;
-(NSArray *)predictedApps;
-(id)jsonRawData;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(void)enumerateAtxSearchResults:(/*^block*/id)arg1 ;
@end
