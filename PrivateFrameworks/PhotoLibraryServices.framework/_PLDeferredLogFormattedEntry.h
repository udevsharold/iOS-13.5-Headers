/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _PLDeferredLogFormattedEntry : NSObject {

	long long _context;
	NSString* _logType;
	NSString* _entityDescription;
	NSDate* _date;
	unsigned long long _objectPointer;

}

@property (assign,nonatomic) long long context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * logType;                            //@synthesize logType=_logType - In the implementation block
@property (nonatomic,retain) NSString * entityDescription;                  //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long objectPointer;              //@synthesize objectPointer=_objectPointer - In the implementation block
-(NSDate *)date;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)entityDescription;
-(NSString *)logType;
-(void)setLogType:(NSString *)arg1 ;
-(void)setEntityDescription:(NSString *)arg1 ;
-(unsigned long long)objectPointer;
-(void)setObjectPointer:(unsigned long long)arg1 ;
@end

