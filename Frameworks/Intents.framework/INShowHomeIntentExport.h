/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange;


@protocol INShowHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@required
-(id)init;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(void)setTime:(id)arg1;
-(void)setFilters:(id)arg1;

@end

