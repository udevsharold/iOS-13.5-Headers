/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(BOOL)requiresResponse;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
@end

