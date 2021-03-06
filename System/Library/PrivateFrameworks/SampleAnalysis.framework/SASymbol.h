/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSString, NSMutableArray;

@interface SASymbol : NSObject {

	unsigned long long _offsetIntoTextSegment;
	unsigned long long _length;
	NSString* _name;
	NSMutableArray* _sourceInfos;

}

@property (assign) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (assign) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) NSMutableArray * sourceInfos;                        //@synthesize sourceInfos=_sourceInfos - In the implementation block
+(id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3 ;
+(id)symbolWithCSSymbol:(CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)length;
-(id)debugDescription;
-(NSString *)name;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)offsetIntoTextSegment;
-(id)addSourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned)arg3 columnNum:(unsigned)arg4 filePath:(id)arg5 ;
-(id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(void)setOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(NSMutableArray *)sourceInfos;
@end

