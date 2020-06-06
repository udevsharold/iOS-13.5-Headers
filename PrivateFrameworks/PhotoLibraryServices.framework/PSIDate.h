/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSIDate : NSObject {

	long long _int64Representation;
	long long _int64RepresentationMask;

}

@property (readonly) long long era; 
@property (readonly) long long year; 
@property (readonly) long long month; 
@property (readonly) long long day; 
@property (readonly) long long int64Representation;                  //@synthesize int64Representation=_int64Representation - In the implementation block
@property (readonly) long long int64RepresentationMask;              //@synthesize int64RepresentationMask=_int64RepresentationMask - In the implementation block
+(id)distantFuture;
+(id)distantPast;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)era;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)dateComponents;
-(id)initWithUniversalDate:(id)arg1 calendar:(id)arg2 ;
-(long long)int64RepresentationMask;
-(long long)int64Representation;
-(id)initWithInt64Representation:(long long)arg1 ;
-(id)initWithDateComponents:(id)arg1 ;
@end

