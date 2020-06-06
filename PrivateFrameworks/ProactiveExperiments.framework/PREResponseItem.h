/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PREResponseItem : NSObject <NSSecureCoding> {

	NSNumber* _categoryId;
	NSNumber* _modelId;
	NSNumber* _responseClassId;
	NSNumber* _replySubgroupId;
	NSNumber* _replyTextId;
	NSString* _replyText;
	NSString* _language;
	NSNumber* _isCustomResponse;

}

@property (nonatomic,readonly) NSNumber * categoryId;                    //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,readonly) NSNumber * modelId;                       //@synthesize modelId=_modelId - In the implementation block
@property (nonatomic,readonly) NSNumber * responseClassId;               //@synthesize responseClassId=_responseClassId - In the implementation block
@property (nonatomic,readonly) NSNumber * replySubgroupId;               //@synthesize replySubgroupId=_replySubgroupId - In the implementation block
@property (nonatomic,readonly) NSNumber * replyTextId;                   //@synthesize replyTextId=_replyTextId - In the implementation block
@property (nonatomic,readonly) NSString * replyText;                     //@synthesize replyText=_replyText - In the implementation block
@property (nonatomic,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSNumber * isCustomResponse;              //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseItemArrayFromResponseKitArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(NSString *)replyText;
-(NSNumber *)modelId;
-(id)initWithCategoryId:(id)arg1 modelId:(id)arg2 responseClassId:(id)arg3 replySubgroupId:(id)arg4 replyTextId:(id)arg5 replyText:(id)arg6 language:(id)arg7 isCustomResponse:(id)arg8 ;
-(NSNumber *)isCustomResponse;
-(NSNumber *)replyTextId;
-(NSNumber *)categoryId;
-(NSNumber *)responseClassId;
-(BOOL)isEqualToResponseItem:(id)arg1 ;
-(NSNumber *)replySubgroupId;
@end

