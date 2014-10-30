require 'simplecov'
SimpleCov.start
require_relative '../def_macierz'


describe "#mnozenie" do
  it "should be defined" do
    macierz1=[[1,2,3] , [4,5,6] ]
    macierz2=[[1,2],[3,4],[5,6] ]
    expect(mnozenie(2,3,3,2,macierz1,macierz2)).to eq([[22,28],[49,64]])
  end
end

describe "#mnozenie" do
  it "should be defined" do
    macierz3=[[1,2,3,6,7] , [4,2,3,5,6] ,[2,1,3,4,2]]
    macierz4=[[1,2,2],[3,1,4],[1,5,6] ,[1,2,3],[1,2,3]]
    expect(mnozenie(3,5,5,3,macierz3,macierz4)).to eq([[23,45,67],[24,47,67],[14,32,44]])
  end
end

describe "#mnozenie" do
  it "should be defined" do
    macierz5=[[3,4,5,6] , [1,2,3,4] ]
    macierz6=[[3,3,3],[2,2,2],[1,1,1],[6,6,6] ]
    expect(mnozenie(2,4,4,3,macierz5,macierz6)).to eq([[58,58,58],[34,34,34]])
  end
end

describe "#mnozenie" do
  it "should be defined" do
    macierz7=[[1,2,3] , [4,5,6] ]
    macierz8=[[1,2],[3,4],[5,6] ]
    expect(mnozenie(2,3,3,2,macierz7,macierz8)).to eq([[26,26],[49,44]])
  end
end


