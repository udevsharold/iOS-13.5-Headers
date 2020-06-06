/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	unsigned long long _address;
	NSString* _functionName;
	NSString* _className;
	NSString* _executablePath;
	NSString* _realFunctionName;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * functionName;                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSString * executablePath;               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * className;                    //@synthesize className=_className - In the implementation block
-(id)description;
-(NSString *)executablePath;
-(unsigned long long)address;
-(NSString *)className;
-(NSString *)executableName;
-(id)initWithReturnAddress:(unsigned long long)arg1 ;
-(NSString *)functionName;
@end

