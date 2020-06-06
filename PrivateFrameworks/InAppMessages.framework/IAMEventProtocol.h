/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol IAMEventProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@optional
-(NSString *)source;
-(id)value;
-(NSDictionary *)payload;

@required
-(NSString *)name;
-(long long)type;
-(BOOL)matchesWithKey:(id)arg1;

@end

