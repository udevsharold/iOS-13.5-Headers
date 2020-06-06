/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary;

@interface SASVGenerateDuc : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * ducFamilyId; 
@property (nonatomic,copy) NSString * ducId; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDuc;
+(id)generateDucWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)ducFamilyId;
-(void)setDucFamilyId:(NSString *)arg1 ;
-(NSString *)ducId;
-(void)setDucId:(NSString *)arg1 ;
@end

