/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject {

	NSNumber* _entityId;
	NSNumber* _detailEntityId;
	NSData* _matchinfoData;

}

@property (nonatomic,readonly) NSNumber * entityId;                    //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) NSNumber * detailEntityId;              //@synthesize detailEntityId=_detailEntityId - In the implementation block
@property (nonatomic,readonly) NSData * matchinfoData;                 //@synthesize matchinfoData=_matchinfoData - In the implementation block
+(id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)entityId;
-(id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(BOOL)isEqualToMatchinfoData:(id)arg1 ;
-(NSNumber *)detailEntityId;
-(NSData *)matchinfoData;
@end
