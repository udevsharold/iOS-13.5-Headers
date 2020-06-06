/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SADomainObject, NSString;

@interface SAUILParseableExpression : SADomainObject

@property (nonatomic,retain) SADomainObject * context; 
@property (nonatomic,copy) NSString * expressionString; 
+(id)parseableExpression;
+(id)parseableExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SADomainObject *)context;
-(id)groupIdentifier;
-(void)setContext:(SADomainObject *)arg1 ;
-(id)encodedClassName;
-(NSString *)expressionString;
-(void)setExpressionString:(NSString *)arg1 ;
@end

