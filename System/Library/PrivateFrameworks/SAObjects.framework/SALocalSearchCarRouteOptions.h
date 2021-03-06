/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)avoidTolls;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(BOOL)avoidHighways;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(id)encodedClassName;
@end

