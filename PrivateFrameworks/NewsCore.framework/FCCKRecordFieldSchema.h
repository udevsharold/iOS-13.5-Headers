/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCCKRecordFieldSchema : NSObject {

	BOOL _isEncrypted;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isEncrypted;                  //@synthesize isEncrypted=_isEncrypted - In the implementation block
+(id)fieldWithName:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(id)init;
-(NSString *)name;
-(BOOL)isEncrypted;
-(id)initWithFieldName:(id)arg1 isEncrypted:(BOOL)arg2 ;
@end

