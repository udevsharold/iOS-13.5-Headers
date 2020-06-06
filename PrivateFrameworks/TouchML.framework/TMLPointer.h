/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLPointerJSExports.h>

@interface TMLPointer : NSObject <TMLPointerJSExports> {

	/*^block*/id _readBlock;
	/*^block*/id _writeBlock;

}

@property (nonatomic,copy) id readBlock;               //@synthesize readBlock=_readBlock - In the implementation block
@property (nonatomic,copy) id writeBlock;              //@synthesize writeBlock=_writeBlock - In the implementation block
@property (assign,nonatomic) id pointee; 
+(id)pointerWithReadBlock:(/*^block*/id)arg1 writeBlock:(/*^block*/id)arg2 ;
-(id)writeBlock;
-(id)readBlock;
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
-(id)pointee;
-(void)setPointee:(id)arg1 ;
@end

