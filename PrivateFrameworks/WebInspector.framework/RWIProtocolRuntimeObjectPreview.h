/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) BOOL lossless; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (assign,nonatomic) BOOL overflow; 
@property (nonatomic,copy) NSArray * properties; 
@property (nonatomic,copy) NSArray * entries; 
@property (assign,nonatomic) int size; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(int)size;
-(NSString *)stringRepresentation;
-(NSArray *)properties;
-(void)setSize:(int)arg1 ;
-(long long)subtype;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(BOOL)overflow;
-(void)setOverflow:(BOOL)arg1 ;
-(void)setLossless:(BOOL)arg1 ;
-(BOOL)lossless;
-(id)initWithType:(long long)arg1 lossless:(BOOL)arg2 ;
@end

