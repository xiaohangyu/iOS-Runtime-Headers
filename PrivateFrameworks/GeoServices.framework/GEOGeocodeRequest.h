/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
    unsigned short _geocodeProvider;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
}

@property unsigned short geocodeProvider;
@property(retain) NSString * logRequestToFile;
@property(retain) NSString * logResponseToFile;

- (void)dealloc;
- (unsigned short)geocodeProvider;
- (id)initForwardGeocodeWithAddress:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1 includeBusinessOptions:(BOOL)arg2;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (void)setGeocodeProvider:(unsigned short)arg1;
- (void)setLogRequestToFile:(id)arg1;
- (void)setLogResponseToFile:(id)arg1;

@end
