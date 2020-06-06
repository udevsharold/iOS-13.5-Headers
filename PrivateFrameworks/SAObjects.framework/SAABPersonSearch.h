/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SALocation *)address;
-(id)groupIdentifier;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(NSURL *)accountIdentifier;
-(NSString *)relationship;
-(NSDate *)birthday;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(void)setAddress:(SALocation *)arg1 ;
-(SAEmail *)email;
-(void)setEmail:(SAEmail *)arg1 ;
-(SAPhone *)phone;
-(void)setPhone:(SAPhone *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

