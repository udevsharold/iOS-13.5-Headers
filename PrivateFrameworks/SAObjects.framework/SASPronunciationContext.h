/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, NSNumber;

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * domainObjectIdentifier; 
@property (nonatomic,copy) NSString * domainObjectPropertyIdentifier; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSNumber * tokenOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationContext;
+(id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)orthography;
-(NSString *)fullName;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setOrthography:(NSString *)arg1 ;
-(NSNumber *)tokenOffset;
-(void)setTokenOffset:(NSNumber *)arg1 ;
-(NSURL *)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(NSURL *)arg1 ;
-(NSString *)domainObjectPropertyIdentifier;
-(void)setDomainObjectPropertyIdentifier:(NSString *)arg1 ;
@end

