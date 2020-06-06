/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockNews : SADomainObject

@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * url; 
+(id)news;
+(id)newsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)url;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(id)encodedClassName;
@end

