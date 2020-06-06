/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:44 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSDictionary;

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing> {

	long long _noteId;
	long long _taskId;
	NSString* _content;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	long long _revision;

}

@property (nonatomic,readonly) long long noteId;                                 //@synthesize noteId=_noteId - In the implementation block
@property (nonatomic,readonly) long long taskId;                                 //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSString * content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                               //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)createdAtJSONTransformer;
+(id)updatedAtJSONTransformer;
-(long long)revision;
-(NSString *)content;
-(NSDate *)createdAt;
-(long long)taskId;
-(long long)noteId;
-(NSDate *)updatedAt;
@end

