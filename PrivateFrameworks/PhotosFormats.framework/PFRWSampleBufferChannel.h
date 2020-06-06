/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInput, AVAssetReaderOutput, AVAssetWriterInputPixelBufferAdaptor;

@interface PFRWSampleBufferChannel : NSObject {

	/*^block*/id completionHandler;
	NSObject*<OS_dispatch_queue> serializationQueue;
	BOOL _useAdaptor;
	BOOL _finished;
	AVAssetWriterInput* _assetWriterInput;
	AVAssetReaderOutput* _assetReaderOutput;
	AVAssetWriterInputPixelBufferAdaptor* _adaptor;

}

@property (assign,nonatomic) BOOL useAdaptor;                                             //@synthesize useAdaptor=_useAdaptor - In the implementation block
@property (assign,nonatomic) BOOL finished;                                               //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) AVAssetWriterInput * assetWriterInput;                       //@synthesize assetWriterInput=_assetWriterInput - In the implementation block
@property (nonatomic,retain) AVAssetReaderOutput * assetReaderOutput;                     //@synthesize assetReaderOutput=_assetReaderOutput - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPixelBufferAdaptor * adaptor;              //@synthesize adaptor=_adaptor - In the implementation block
-(id)init;
-(void)cancel;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(AVAssetWriterInput *)assetWriterInput;
-(id)initWithAssetReaderOutput:(id)arg1 assetWriterInput:(id)arg2 useAdaptor:(BOOL)arg3 ;
-(void)callCompletionHandlerIfNecessary;
-(void)startWithDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useAdaptor;
-(void)setUseAdaptor:(BOOL)arg1 ;
-(void)setAssetWriterInput:(AVAssetWriterInput *)arg1 ;
-(AVAssetReaderOutput *)assetReaderOutput;
-(void)setAssetReaderOutput:(AVAssetReaderOutput *)arg1 ;
-(AVAssetWriterInputPixelBufferAdaptor *)adaptor;
-(void)setAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
@end

