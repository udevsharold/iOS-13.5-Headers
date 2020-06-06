/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * minimumHeight; 
@property (nonatomic,copy) NSNumber * rowCount; 
@property (nonatomic,copy) NSNumber * rowStartIndex; 
@property (nonatomic,copy) NSNumber * showTopBorder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabularDataRowStyleRule;
+(id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)rowCount;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setRowCount:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setShowTopBorder:(NSNumber *)arg1 ;
-(NSNumber *)showTopBorder;
-(NSNumber *)rowStartIndex;
-(void)setRowStartIndex:(NSNumber *)arg1 ;
@end

