/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataProvider.h>

@interface _ETBufferDataSource : NSObject <ETDataProvider> {

	unsigned long long _number_of_data_points;
	unsigned long long _batchSize;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _nonBatchBlobNames;
	unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 1> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 1> > > > >* _dataStorage;
	unordered_map<std::__1::basic_string<char>, Espresso::layer_shape, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Espresso::layer_shape> > >* _blobShapes;

}

@property (assign) unordered_map<std::__1::basic_string<char> dataStorage;              //@synthesize dataStorage=_dataStorage - In the implementation block
@property (assign) unordered_map<std::__1::basic_string<char> blobShapes;               //@synthesize blobShapes=_blobShapes - In the implementation block
@property (assign) unsigned long long number_of_data_points;                            //@synthesize number_of_data_points=_number_of_data_points - In the implementation block
@property (assign) unsigned long long batchSize;                                        //@synthesize batchSize=_batchSize - In the implementation block
@property (assign) vector<std::__1::basic_string<char> nonBatchBlobNames;               //@synthesize nonBatchBlobNames=_nonBatchBlobNames - In the implementation block
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(void)setBlobShapes:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(float*)dataAtIndex:(unsigned long long)arg1 key:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 ;
-(id)initWithBlobShapes:(const unordered_map<std::__1::basic_string<char>, Espresso::layer_shape, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Espresso::layer_shape> > >*)arg1 numberOfDataPoints:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)number_of_data_points;
-(unordered_map<std::__1::basic_string<char>)dataStorage;
-(void)setDataStorage:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(unordered_map<std::__1::basic_string<char>)blobShapes;
-(void)setNumber_of_data_points:(unsigned long long)arg1 ;
-(vector<std::__1::basic_string<char>)nonBatchBlobNames;
-(void)setNonBatchBlobNames:(vector<std::__1::basic_string<char>)arg1 ;
@end

