/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class wspHeader;

@interface wspQueryStatusOut : NSObject {

	unsigned _qStatus;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;              //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned qStatus;              //@synthesize qStatus=_qStatus - In the implementation block
-(id)init;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(wspHeader *)whdr;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setQStatus:(unsigned)arg1 ;
-(unsigned)qStatus;
@end

