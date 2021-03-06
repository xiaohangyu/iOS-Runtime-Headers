/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface TSCHChartAxisAnalysis : NSObject {
    NSArray *_majorGridLocations;
    double _max;
    double _min;
    NSArray *_minorGridLocations;
    double _modelMax;
    double _modelMin;
    long long _retainCount;
    NSArray *_totals;
}

@property(copy) NSArray * majorGridLocations;
@property double max;
@property double min;
@property(copy) NSArray * minorGridLocations;
@property double modelMax;
@property double modelMin;
@property(copy) NSArray * totals;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)majorGridLocations;
- (double)max;
- (double)min;
- (id)minorGridLocations;
- (double)modelMax;
- (double)modelMin;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setMajorGridLocations:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setMinorGridLocations:(id)arg1;
- (void)setModelMax:(double)arg1;
- (void)setModelMin:(double)arg1;
- (void)setTotals:(id)arg1;
- (id)totals;

@end
