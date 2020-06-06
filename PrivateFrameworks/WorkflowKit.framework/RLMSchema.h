/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying> {

	NSArray* _objectSchema;
	Schema* _objectStoreSchema;
	NSMutableDictionary* _objectSchemaByName;

}

@property (nonatomic,retain) NSMutableDictionary * objectSchemaByName;              //@synthesize objectSchemaByName=_objectSchemaByName - In the implementation block
@property (nonatomic,copy) NSArray * objectSchema; 
+(id)partialPrivateSharedSchema;
+(id)sharedSchemaForClass:(Class)arg1 ;
+(id)sharedSchema;
+(Class)classForString:(id)arg1 ;
+(id)dynamicSchemaFromObjectStoreSchema:(const Schema*)arg1 ;
+(id)schemaWithObjectClasses:(id)arg1 ;
+(id)partialSharedSchema;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)schemaForClassName:(id)arg1 ;
-(NSArray *)objectSchema;
-(Schema*)objectStoreCopy;
-(NSMutableDictionary *)objectSchemaByName;
-(void)setObjectSchema:(NSArray *)arg1 ;
-(BOOL)isEqualToSchema:(id)arg1 ;
-(void)setObjectSchemaByName:(NSMutableDictionary *)arg1 ;
@end

