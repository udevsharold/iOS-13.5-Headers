/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@interface SARange : SADomainObject

@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long start; 
+(id)range;
+(id)rangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(long long)start;
-(id)groupIdentifier;
-(void)setStart:(long long)arg1 ;
-(id)encodedClassName;
@end
