/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTLNamedConstantValue : NSObject {

	NSString* _name;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void*)data;
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 name:(id)arg3 ;
-(id)describe;
@end

